#include <curl/curl.h>
#include <iostream>
#include <thread>
#include <chrono>

void loop() {
    curl_version_info_data* data = curl_version_info(CURLVERSION_NOW);
    std::cout << "Hello from curl version: " << data->version << std::endl;

    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    sleep_for(1s);
}

void setup() {
    curl_global_init(CURL_GLOBAL_ALL);
}

void teardown() {
    curl_global_cleanup();
}
