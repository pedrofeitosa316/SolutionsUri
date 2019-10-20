matriz = []
somatorio = 0
linha = int(input())
operacao = str(input())

for i in range(12):
	matriz.append( [0] * 12 )

for i in range(12):
	for j in range(12):
		matriz[i][j] = float(input())



for i in range(12):
	somatorio += matriz[linha][i]
	media = somatorio/12

if operacao == "S":
	print("{:.1f}".format(somatorio))

else:
	print("{:.1f}".format(media))	
