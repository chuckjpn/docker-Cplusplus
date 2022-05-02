# docker-Cplusplus
 dockerとc++の開発環境

# ref
https://qiita.com/yuzutarogo/items/8898377739b5c674743f

# build
```
docker-compose build
```
# run
```
docker-compose up -d
```
# into the container
```
docker exec -it cppdev
```
# c++ move(in the container)
```
cd /cppdev/src
```
# c++ compile(in the container)
```
g++ hello.cpp -o hello
```
# c++ run(in the container)
```
./hello
```
