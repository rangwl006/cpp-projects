FROM ubuntu:20.04

# update the image
RUN DEBIAN_FRONTEND=noninteractive apt autoremove && \
    apt autoclean -y && \ 
    apt update -y && \
    apt  upgrade -y

## install the necessary C++ libraries
RUN DEBIAN_FRONTEND=noninteractive apt install -y \
    build-essential -y \
    python3-dev -y \
    python3-pip -y \
    cmake -y

