#!/bin/bash

if [ ! -d ./registry ]
	mkdir registry
fi

/usr/bin/icegridregistry --Ice.Config=./config/registry.cfg --daemon
