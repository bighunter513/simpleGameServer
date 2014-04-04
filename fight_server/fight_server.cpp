
#include "fight_server.h"
#include "version.h"
#include "pugixml.hpp"
#include "system_util.h"

FightServer::FightServer() : m_is_shuting_down(false)
{
}

FightServer::~FightServer()
{
}
int FightServer::on_init()
{
	pugi::xml_document xml_config;
	if (!xml_config.load_file(config_file))
	{
		error_return(-1, "load config failed");
	}
	pugi::xml_node root = xml_config.child("root");
	if (!root) error_return(-1, "missing <root> node");

	pugi::xml_node node = root.child("log");
	if (logger.init(node.attribute("prefix").value(),
		node.attribute("level").as_int()) != 0)
	{
		error_return(-1, "init logger failed");
	}

	/*node = root.child("client_acceptor");
	if (m_client_acceptor.init(&event_engine,
		node.attribute("listen_ip").value(),
		node.attribute("listen_port").as_int()) != 0)
	{
		error_return(-1, "init client acceptor failed");
	}
	set_defer_accept(m_client_acceptor.fd(), 10);
	*/

	set_timer(60000);

	int shut_down_delay_sec = root.child("shutdown").attribute("delay_sec").as_int();
	if (shut_down_delay_sec < 1)
	{
		error_return(-1, "shutdown delay sec init failed");
	}
	set_delay_stop(shut_down_delay_sec * 1000);

	srand(time(NULL));

	LOG_INFO("fight server init OK.");
	return 0;
}

int FightServer::on_reload()
{
	LOG_INFO("fight server on reload.");
	return on_init();
}

void FightServer::on_fini()
{
	LOG_INFO("fight server stopped.");
	return;
}

void FightServer::on_timer()
{
	return;
}

const char* FightServer::version()
{
	return VERSION;
}
void FightServer::on_delay_stop()
{
	if (m_is_shuting_down)
	{
		return;
	}
	m_is_shuting_down = true;

	LOG_DEBUG("server is shutting down...");
}
