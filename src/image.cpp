// image.cpp — part of meme-factory-x.

#include "memefactoryx/image.h"

#include <cstdio>

namespace memefactoryx {

Image::Image(const std::string& config_path)
    : config_path_(config_path) {}

void Image::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Image::run() {
    if (verbose_) std::fprintf(stderr, "[meme-factory-x] image: run\n");
    // core logic lives here
    return true;
}

}  // namespace memefactoryx
