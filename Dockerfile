FROM gcc:latest

WORKDIR /app

COPY . .

RUN g++ -o main main.cpp Solutions.cpp

CMD ["/app/main"]