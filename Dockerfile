FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    libncurses5-dev \
    libncursesw5-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY src ./src
COPY src/CMakeLists.txt .

RUN cmake -S . -B build && cmake --build build

CMD ["./build/ncurses_example"]
