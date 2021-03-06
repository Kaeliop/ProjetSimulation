modelname = "simulation_paquets_actifs.data"
data = read.table(modelname)
attach(data)
args = commandArgs(trailingOnly=TRUE)

name <- args[1]

temps_simulation = V1
nombre_paquets_actifs = V2

pdf(name, width = 16, height=16)

plot(temps_simulation,nombre_paquets_actifs,type="l",xlab="temps_simulation en tic",ylab="nombre_paquets_actifs",col="red")

dev.off()
