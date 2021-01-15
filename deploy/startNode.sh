#!/bin/bash
if [ ! -d ./node1 ]
	mkdir node1
fi

if [ ! -d ./node2 ]
	mkdir node2
fi

/usr/bin/icegridnode --Ice.Config=./config/node.cfg --daemon
/usr/bin/icegridnode --Ice.Config=./config/node2.cfg --daemon
