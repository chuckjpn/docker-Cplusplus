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
docker exec -it cppdev bash
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
# ファイルの分割サンプル
Sample1/Sample1.cppと
Sample1/myfunc.cppを
合わせてコンパイルする
```
g++ Sample1/Sample1.cpp Sample1/myfunc.cpp -o build/Sample1
./build/Sample1
```
