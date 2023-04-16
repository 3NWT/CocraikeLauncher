cmake -S . -B build -G Ninja \
   -DCMAKE_BUILD_TYPE=Release \
   -DCMAKE_INSTALL_PREFIX="/usr" \ 
#   -DENABLE_LTO=ON 
#  -DLauncher_QT_VERSION_MAJOR="6" 

cmake --build build
cmake --install build
