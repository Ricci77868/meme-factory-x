// caption.cpp — part of meme-factory-x.

#include "memefactoryx/caption.h"

#include <cstdio>

namespace memefactoryx {

Caption::Caption(const std::string& config_path)
    : config_path_(config_path) {}

void Caption::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Caption::run() {
    if (verbose_) std::fprintf(stderr, "[meme-factory-x] caption: run\n");
    // core logic lives here
    return true;
}

}  // namespace memefactoryx
