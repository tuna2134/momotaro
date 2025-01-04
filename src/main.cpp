#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <csignal>

std::atomic<bool> running(true);

void handleSignal(int signum) {
    if (signum == SIGINT) {
        std::cout << "OGYAA.." << std::endl;
        running = false;
    }
}

int main() {
    signal(SIGINT, signalHandler);
    
    while (running) {
        std::cout << "OGYAA!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
