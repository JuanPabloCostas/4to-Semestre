

def sacarMascara(hosts):
    n = hosts + 2
    aux = 1
    pivote = 0
    while (n > aux):
        aux *= 2
        pivote += 1

    array = [255,255,255,255]
    for i in range (3,0,-1):
        if(pivote >= 8):
            array[i] = 0
            # print(0)
            pivote -= 8
        elif(pivote > 0):
            array[i] -= (2 ** pivote - 1)
            # print(255-(2 ** pivote - 1))
            pivote -= pivote
    # print(array) ## Mascara
    return array

def Final(ip,mask):
    array2 = [255,255,255,255]
    ipAux = []
    for i in range(4):
        ipAux.append(ip[i])

    for i in range (4):
        array2[i] -= mask[i]

    for i in range(4):
        ipAux[i] += array2[i]

    return ipAux

def sumarIP(ip,selected=3):
    if(ip[selected]==255):
        return sumarIP(ip,selected-1)
    else:
        ip[selected] += 1
        if(selected != 3):
            ip[selected+1] = 0
        return ip


def sacarDatos(ip,hosts):
    mask = sacarMascara(hosts)
    # print(mask)

    final = Final(ip,mask)
    # print(final)

    print("\n",hosts)
    print("Rango ip:" , ip , "-" , final)
    print("Mascara:" , mask)
    print("-------------------------------\n")
    return mask

ip = [148,220,0,0]
hosts = [3500,1900,800,200,2,2,2]

# sacarDatos(ip,hosts)
for i in range(len(hosts)):
    mask = sacarDatos(ip,hosts[i])
    ip = sumarIP(Final(ip,mask))

