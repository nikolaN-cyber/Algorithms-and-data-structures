# Algorithms project

This project contains solutions of many tasks related to algorithmic problems. Main goal of this project is to upgrade understanding of algorithms, their optimization and work with different data structures.

## Content

- **`main.cpp`**: Main entrance of applications. Serves as a testing file.
- **`Solutions.h`**: Header file that contains all function declarations that are implemented at Solutions.cpp.
- **`Solutions.cpp`**: Source file that contains all function implementations.
- **`Tasks`**: Folder that contains texts of tasks. All tasks are organized by categories (arrays, strings, graphs...) in separate files.
- **`Dockerfile`**: Definition of Docker image that allows us to create container that is easier way to run application.

### Launching the application

### Through command promp.

To run this app, gcc compailer is required.
Open terminal and navigate to folder which contains main.cpp file and run this command g++ -o main main.cpp Solutions.cpp.
This will create main.exe (executable file).
To run this enter: main (on Windows), ./main (on Linux).

### With docker

Open terminal and navigate to folder which contains Dockerfile and run command docker build -t image-name .
This will build image with a name specified, then to run this image as a container do this docker run image-name, or if you want container to have certain name docker run --name container-name image-name.
