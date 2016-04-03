#!/bin/sh

VERSION='1.7.0'
INSTALL_DIR='/usr/local'
DOWNLOAD_DIR='/tmp'

# Download
cd $DOWNLOAD_DIR
GTEST_TARFILE="gtest-${VERSION}.tar.gz"
GTEST_DIR='gtest'
wget -O $GTEST_TARFILE https://github.com/google/googletest/archive/release-${VERSION}.tar.gz
tar xzvf $GTEST_TARFILE
mv googletest-release-${VERSION} $GTEST_DIR

GMOCK_TARFILE="gmock-${VERSION}.tar.gz"
GMOCK_DIR="gmock"
wget -O $GMOCK_TARFILE https://github.com/google/googlemock/archive/release-${VERSION}.tar.gz
tar xzvf $GMOCK_TARFILE
mv googlemock-release-${VERSION} $GMOCK_DIR

# Build
cd $GMOCK_DIR
cmake .
make

# Install
sudo mkdir -p ${INSTALL_DIR}/include
sudo cp -r include/gmock ${INSTALL_DIR}/include
sudo cp -r ../${GTEST_DIR}/include/gtest ${INSTALL_DIR}/include
sudo mkdir -p ${INSTALL_DIR}/lib
sudo cp *.a ${INSTALL_DIR}/lib
sudo cp gtest/*.a ${INSTALL_DIR}/lib

# Cleanup
cd $DOWNLOAD_DIR
rm $GTEST_TARFILE $GMOCK_TARFILE
rm -r $GTEST_DIR $GMOCK_DIR
