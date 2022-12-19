
#DESTDIR=/usr/local
DESTDIR=./usr
PROG=calculator

all: $(PROG)

$(PROG): $(PROG).c
	gcc $(PROG).c -o $@

install: $(PROG)
	#echo DESTDIR=$(DESTDIR)
	mkdir -p $(DESTDIR)/bin
	cp $(PROG) $(DESTDIR)/bin/

clean:
	rm -f *~ $(PROG) *.o

.PHONY: clean install all
