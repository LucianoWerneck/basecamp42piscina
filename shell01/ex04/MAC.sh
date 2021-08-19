#!/bin/sh
ifconfig | grep '(Ethernet)' | cut -c 15-31
