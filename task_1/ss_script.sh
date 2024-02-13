#!/bin/bash

mkfifo ss_pipe
ss -plnt >  ss_pipe &
