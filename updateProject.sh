#!/bin/sh
git clone https://github.com/curl/curl
rm -rf include src 
mv curl/lib src
mv curl/include include
cp curl_config.h src
rm -rf curl
