// main.cpp — entry point. Wires config and subsystems together.

#include "memefactoryx/settings.h"
#include "memefactoryx/caption.h"
#include "memefactoryx/image.h"
#include "memefactoryx/trends.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    memefactoryx::Settings settings = memefactoryx::Settings::load_default();
    memefactoryx::Caption caption(settings.store_path);
    memefactoryx::Image image(settings.store_path);
    memefactoryx::Trends trends(settings.store_path);
    std::fprintf(stderr, "[meme-factory-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
