from conan import ConanFile
from conan.tools.cmake import CMake, cmake_layout, CMakeToolchain, CMakeDeps

class Conan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    generators = 'CMakeDeps', 'CMakeToolchain'

    def requirements(self):
        self.requires("opencv/3.4.20") 

    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()