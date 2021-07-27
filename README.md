# kurento-recorder-module
OpenCV module to save frames as PNG images



```linux
mkdir build && cd build
cmake ..
make
```

Deb Package
Root folder
```linux
dpkg-buildpackage -us -uc
```

To install:

```linux
dpkg -i recorder-module_0.0.1~rc1_amd64.deb
service kurento-media-server stop
service kurento-media-server start
```


Java Client

```linux
mkdir build && cd build
cmake .. -DGENERATE_JAVA_CLIENT_PROJECT=TRUE
make java_install
```


