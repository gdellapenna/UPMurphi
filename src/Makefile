all: upmc pddl2upm

upmc:
	cd UPMurphi && make
	
pddl2upm:
	cd UPMurphi_parser && make
	
clean:
	cd UPMurphi && make clean
	cd UPMurphi_parser && make clean

cleanall: 
	cd UPMurphi && make cleanall
	rm -f ../bin/upmc
	cd UPMurphi_parser && make cleanall
	rm -f ../bin/pddl2upm


