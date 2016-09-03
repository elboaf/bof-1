STEP 1 - UNTAR
--------
bof@ephemera ~ $ tar -xzvf bof-1.tar.gz 
bof-1/
bof-1/bof-1.c
bof-1/Makefile
bof-1/README.txt

STEP 2 - BUILD
--------
bof@ephemera ~ $ cd bof-1
bof@ephemera ~/bof-1 $ make
make -C /lib/modules/4.4.6-gentoo/build M=/home/bof/bof-1 modules
make[1]: Entering directory '/usr/src/linux-4.4.6-gentoo'
  CC [M]  /home/bof/bof-1/bof-1.o
  Building modules, stage 2.
  MODPOST 1 modules
  CC      /home/bof/bof-1/bof-1.mod.o
  LD [M]  /home/bof/bof-1/bof-1.ko
make[1]: Leaving directory '/usr/src/linux-4.4.6-gentoo'

STEP 3 - LOAD AND UNLOAD
--------
bof@ephemera ~/bof-1 $ sudo insmod ./bof-1.ko
Password: 
bof@ephemera ~/bof-1 $ sudo rmmod bof-1
bof@ephemera ~/bof-1 $ 

look at /var/log/messages to see a message from vanilla ice
