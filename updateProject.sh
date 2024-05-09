#!/bin/sh
git clone https://github.com/curl/curl
git reset --hard 63a07a7
rm -rf include src 
mv curl/lib src
mv curl/include include
cp curl_config.h src
rm -rf curl
