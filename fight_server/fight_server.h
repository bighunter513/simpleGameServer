#ifndef FIGHT_SERVER_H
#define FIGHT_SERVER_H

#include <string>
#include "application.h"
#include "day_roll_logger.h"
#include "tcp_acceptor.h"


class ClientAcceptor : public king::tcp_acceptor
{
public:
	int on_connection(int fd, king::sa_in_t* addr);
};

class FightServer : public king::application
{
public:
	FightServer();
	virtual ~FightServer();

protected:
	virtual int on_init();
	virtual int on_reload();
	virtual void on_fini();
	virtual void on_timer();
	virtual const char* version();
	virtual void on_delay_stop();

public:
	king::day_roll_logger logger;

private:
	bool  m_is_shuting_down;
};


DECLARE_APPLICATION_INSTANCE(FightServer);


#endif

