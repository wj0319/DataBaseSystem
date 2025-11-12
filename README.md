# DataBaseSystem Project

## 🧩 프로젝트 개요
TPC-H 데이터셋을 이용하여 `orders`와 `lineitem` 테이블 간의  
Block Nested Loops Join 연산을 C++로 구현합니다.

## 📂 폴더 구조
- `code/` : 소스코드
- `data/` : TPC-H에서 생성한 입력 데이터(.tbl)
- `.gitignore` : 깃에 올리지 않을 파일 설정

## 🧑‍💻 개발 환경
- Ubuntu 24.04 (WSL)
- C++ (g++)
- Visual Studio Code

## 데이터 셋업
- .tbl 파일은 포함되어 있지 않습니다.
- dbgen으로 직접 생성 후 'data/' 폴더에 넣어주세요.