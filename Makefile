
SUBDIRS =  test2_makefile_bin test2_makefile_dyn test2_makefile_dyn_call \
           test2_makefile_sta test2_makefile_sta_call

all: subdirs

subdirs:
	for n in $(SUBDIRS); do $(MAKE) -C $$n || exit 1; done

clean:
	for n in $(SUBDIRS); do $(MAKE) -C $$n clean; done
