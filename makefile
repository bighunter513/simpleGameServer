
#SUBDIRS := $(shell ls -d */)

SUBDIRS := framework public  config third_party datastore_server logic_server zone_server gate_server \
policy_server name_server log_server logic_server/plugins

commit_tag=$(shell git rev-list --max-count=1 HEAD)

.PHONY:all $(SUBDIRS)

all : version $(SUBDIRS)
#	@for SUBDIR in $(SUBDIRS) ; do make -C $$SUBDIR all ; done

version : 
	@if  ! grep "$(commit_tag)" public/version.h >/dev/null ; then                   \
        echo "update public/version.h"       ;    \
        sed 's/COMMIT_TAG/"$(commit_tag)"/g' public/version.tpl.h > public/version.h     ;  \
    fi

$(SUBDIRS):
	$(MAKE) -C $@
clean :
	@for SUBDIR in $(SUBDIRS) ; do make -C $$SUBDIR clean ; done
release: clean
	@for SUBDIR in $(SUBDIRS) ; do make -C $$SUBDIR release=1 ; done


