# UPMurphi
The Universal Planner Murphi supports planning and universal planning for linear and nonlinear continuous PDDL+ models with processes and events. UPMurphi also supports Timed Initial Literals and Timed Initial Fluents.

UPMurphi is based on the Discretise and Validate approach and it has been designed to automatically interface with the VAL plan validator.

### Warning:  this project is no longer maintained. Unfortunately, the Murphi core, which UPMurphi builds on, is rather old and has not been updated, so maintaining UPMurphi would require us a complete rewriting of the base code, which is currently impossible. If you still want to try it, refer to the troubleshoot.txt for the correct versions of the libraries and tools that were used in our last successful compilations. Thanks for your interest in UPMurphi, we hope to come back soon with a new, updated tool.

## Quick Start

To quickly begin using UPMurphi, follow these steps.

* First of all, download the latest UPMurphi distribution package.
* By default, UPMurphi uses a 32-bit compilation. However, it has been designed to support compilation onto 64-bit architectures, although it has not been fully tested yet. To succesfully compile UPMurphi, make sure you have the required libraries: on Ubuntu you can simply issue the following command: `sudo apt-get install build-essential flex bison libc6-dev-i386 gcc-multilib g++-multilib`. Similar packages need to be installed in other Linux distributions as well as in Cygwin under Windows.
* Enter the "src" directory, call "make" and cross your fingers. If everything is ok, the upmurphi compiler (upmc) and the PDDL-to-Murphi compiler (pddl2upm) are now in the "bin" directory.
* To compile a PDDL domain/problem to an UPMurphi planner, invoke the UPMurphi compiler (upmc): `upmc <domain.pddl> <problem.pddl>`. This will call several tools (including the g++ compiler) and generate the executable planner, called problem_planner(.exe), as well as other support and intermediate files.
* Once the executable planner has been generated, you can run it to start the planning process. By default, the planner will allocate 1Gb of memory, search for a feasible plan and write it to the file problem_plan.pddl.
* If you want to use the VAL validator to automatically validate the generated plans, download and install it separately, then edit the Makefile in the "src/UPMurphi" folder and write the complete pathname of the "validate" binary as the value of the VAL_PATHNAME constant.

For more information about how to download, install and use UPMurphi [go to the UPMurphi website] 
(http://www.di.univaq.it/gdellape/upmurphi/).

## Current Limitations of UPMurphi

UPMurphi requires the PDDL+ domain **to be typed** for being processed. The only metric currently supported by UPMUrphi is **:minimize total-time**.

Note that the current version does not use any heuristic search algorithm. Due to the blind search finding a plan may take long, so be patient ;)

## Usage Examples

### Discretisation of the PDDL+ Model

Assuming you are in the ex/generator directory:

* From a PDDL+ domain and problem with user specific discretisation settings (timestep 0.5, mantissa digits: 5, exponent digits: 2):  
    `../../bin/upmc tank_domain.pddl tank_problem.pddl --custom 0.5 5 2`
* From a PDDL+ domain and problem with default discretisation settings:  
    `../../bin/upmc planetary_lander.pddl planetary_lander_problem.pddl`

### Planning and Validating

* Default settings (search for feasible solution, output PDDL+ plans, 1Gb RAM) with PDDL+ verbose mode (includes comments with values for the state variable):  
    `./tank_domain_planner -format:pddlvv`
* Specific Settings (2Gb RAM, plan duration limited to 20 time units):  
    `./planetary_lander_planner -m 2000 -tl 20`

### Papers on UPMurphi

* Giuseppe Della Penna, Daniele Magazzeni, Fabio Mercorio *"A Universal Planning System for Hybrid Domains"* (2012) ( Applied Intelligence, vol. 36 n. 4, pp. 932 - 959, Springer DOI: 10.1007/s10489-011-0306-z	)
* Giuseppe Della Penna, Benedetto Intrigila, Daniele Magazzeni, Fabio Mercorio *"A PDDL+ Benchmark Problem: The Batch Chemical Plant"* (2010) (Proceedings of 20th International Conference on Automated Planning and Scheduling (ICAPS 2010), 12-16/5/2010, pp. 222 - 225, AAAI Press)
* Giuseppe Della Penna, Benedetto Intrigila, Daniele Magazzeni, Fabio Mercorio *"UPMurphi: a Tool for Universal Planning on PDDL+ Problems"* (2009) (Proceedings of 19th International Conference on Automated Planning and Scheduling (ICAPS 2009), 19-23/9/2009, pp. 106 - 113, AAAI Press)
