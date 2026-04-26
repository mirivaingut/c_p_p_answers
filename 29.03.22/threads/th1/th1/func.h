#include <iostream>
#include <thread>
#include <mutex>
using namespace std::literals::chrono_literals;
static bool time_out = false;
static std::mutex m;

void timer(int time);
void exe();