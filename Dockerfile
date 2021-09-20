FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=NONINTERACTIVE

RUN apt update -y && \
    apt install -y \
    dumb-init \
    vim \
    crossbuild-essential-armel \
    ssh \
    cmake

WORKDIR /workspace/src

ENTRYPOINT ["dumb-init", "--"]

