# CompetitiveProgramming.example1 ++
FROM gcc

RUN apt-get update -y
RUN apt-get install vim -y
RUN apt-get install python3-pip -y
RUN pip install requests
RUN pip install beautifulsoup4
RUN apt-get install tmux -y
RUN ln -s /app/vimrc /root/.vimrc