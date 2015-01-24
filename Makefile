
all:
	bash -x build.sh
.PHONY: test
test:
	@echo no test

.PHONY: all clean
clean:
	rm -fr exec_once/ vhash/ voba_str/ voba_value/

.DELETE_ON_ERROR:
