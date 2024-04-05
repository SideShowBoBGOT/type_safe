import os

from conan import ConanFile
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain


class TypeSafe(ConanFile):
    name = 'type_safe'
    version = '1.0.12'
    user = "user"
    channel = "stable"
    settings = ("os", "build_type", "arch", "compiler")
    exports_sources = ("CMakeLists.txt", "include/*", "external/*")
    no_copy_source = True

    def layout(self):
        self.folders.build = "conan_external"
        self.folders.generators = os.path.join(self.folders.build, "generators")

    def generate(self):
        deps = CMakeDeps(self)
        deps.check_components_exist = True
        deps.generate()
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def build_requirements(self):
        self.tool_requires("cmake/[>=3.5]")

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def package_info(self):
        self.cpp_info.bindirs = []
        self.cpp_info.libdirs = []
