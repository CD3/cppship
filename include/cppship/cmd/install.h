#pragma once

#include "cppship/core/profile.h"
#include <optional>

namespace cppship::cmd {

struct InstallOptions {
    Profile profile = Profile::debug;
    std::string prefix;
    std::string bindir;
};

int run_install(const InstallOptions& options);

}
