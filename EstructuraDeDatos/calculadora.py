

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


def sacarDatos(ip,hosts,nombre):
    mask = sacarMascara(hosts)
    # hola
    # print(mask)

    final = Final(ip,mask)
    # print(final)

    print("\n",hosts,"-",nombre)
    print("Rango ip:" , ip , "-" , final)
    print("Mascara:" , mask)
    print("SubMask: " , 255-mask[0] , ",", 255-mask[1] , ",", 255-mask[2] , ",", 255-mask[3])
    print("-------------------------------\n")
    return mask

ip = [148,220,0,0]
# hosts = [6600, 5060, 2640, 2091, 1760, 1100, 660, 440, 330, 250, 250, 250, 250, 250, 198, 176, 176, 161, 110, 99, 88, 66, 55, 55, 44, 44, 33, 33, 22, 22, 2, 2, 2, 2, 2]
hosts = [3500,2200,1500,1250,923,871,365,350,118,98,85,59,55,45,43,39,37,19,19,9,2,2,2,2,2,2,2,2,2,2,2,2]
nombre = ['EYW','RMX','DID','VLAN50 - CNR','PUK','SML','EVW','PTX','WXR','XPT','VLAN10 - SVG','NKR','VLAN40 - XNR','DDA','VLAN70 - BLA','VLAN 60 - CAR','VLAN20 - DMG','VLAN 30 - IXN','VLAN80 - SOF','WVS','RMX @ --- PTX','WXR @ --- PTX','WXR @ --- WBS','EVW @ --- WBS','EVW @ --- SML','DID @ --- SML','DID @ --- PUK','DDA @ --- PUK','DDA @ --- NKR','STU @ --- NKR','STU @ --- XPT','RMX @ --- XPT']

# sacarDatos(ip,hosts)
for i in range(len(hosts)):
    mask = sacarDatos(ip,hosts[i],nombre[i])
    ip = sumarIP(Final(ip,mask))



