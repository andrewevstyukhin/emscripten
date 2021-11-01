mkdir build
pushd build
emcmake cmake ../app -DCMAKE_BUILD_TYPE=Release
emmake make app
popd