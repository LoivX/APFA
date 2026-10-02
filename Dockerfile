#Questo file contiene le istruzioni per costruire l'immagine Docker 

#Immagine base (fonte: docker hub)
FROM python:3.14.7-slim-trixie

#Imposta la directory di lavoro dentro il container
WORKDIR /home

#Installazione dei pacchetti necessari
RUN apt-get update && apt-get install -y \
    vim \
    gcc 

#Copia i file locali dentro il container
COPY . .

RUN pip install -r requirements.txt

