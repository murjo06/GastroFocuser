rm -r ./build
mkdir build
cd ./build
cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Debug ../
make
sudo make install