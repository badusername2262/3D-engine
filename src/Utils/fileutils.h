#pragma once

#include <fstream>
#include <string>

namespace Utils {
  std::string read_file(const std::string& filepath) {
    return {
	std::istreambuf_iterator<char>(std::ifstream(filepath).rdbuf()),
	std::istreambuf_iterator<char>()
    }; }
}
