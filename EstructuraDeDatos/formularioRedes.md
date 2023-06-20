# Formulario de configuracion switch - router

## Como limpiar dispositivos

![alt](https://i.imgur.com/hWqBIVH.png)

*Imagen robada del formulario de Angel

## Configuracion de un switch

### Como crear una vlan?


1. Accede a tu switch a través del modo de terminal (CLI).

2. Ingresa en modo de configuración global usando el comando:
    ```
    enable
    ```

3. Después de ingresar el password (si existe), utiliza el comando:
    ```
    configure terminal
    ```

4. Una vez en modo de configuración global, puedes crear la VLAN. Para hacerlo, ingresa el siguiente comando (sustituyendo "x" con el número de VLAN que deseas crear):
    ```
    vlan x
    ```

5. Luego, puedes asignar un nombre a tu VLAN utilizando el siguiente comando (sustituye "nombre" con el nombre que deseas para tu VLAN):
    ```
    name nombre
    ```

6. Ahora puedes salir del modo de configuración VLAN utilizando el comando:
    ```
    exit
    ```

7. Después, debes asignar la VLAN a un puerto específico. Elige el puerto y configura la VLAN (sustituye "n" con el número del puerto y "x" con el número de VLAN):
    ```
    interface fa0/1 <-- asignar puerto 1 a la 10
    interface range fa0/1 - 10 <-- asignar puertos 1 a 10 a la vlan
    switchport mode access
    switchport access vlan x
    ```

8. Luego, sale del modo de configuración de interfaz y guarda la configuración:
    ```
    exit
    write memory
    ```

### Como truncar el puerto 24 de un switch?



Para configurar el puerto 24 como puerto trunk en un switch Cisco, necesitas seguir estos pasos:

1. Accede al switch a través del modo terminal (CLI).

2. Ingresa en modo de configuración global con el comando:
    ```
    enable
    ```

3. Después de ingresar el password (si existe), utiliza el comando:
    ```
    configure terminal
    ```

4. Ahora ingresa al modo de configuración de interfaz para el puerto que deseas configurar (en este caso, puerto 24). Si el switch utiliza interfaces GigabitEthernet, reemplace "fastEthernet" con "GigabitEthernet" en el comando:
    ```
    interface fastEthernet 0/24
    ```

5. Configura el puerto para funcionar en modo trunk con el comando:
    ```
    switchport mode trunk
    ```

6. Ahora puedes salir del modo de configuración de interfaz y guardar la configuración:
    ```
    exit
    ```

### Como crear el servidor DHCP?

1. Ingresa en modo de configuración global usando el comando:
    ```
    enable
    configure terminal
    ```

2. Vamos a excluir las ip no usables de la puerta de enlace (la primera y la ultima). Por ejemplo, si tenemos:
    ```
     200 - VLAN 10
    Rango ip: [148, 220, 0, 0] - [148, 220, 0, 255]
    Mascara: [255, 255, 255, 0]
    SubMask:  0 , 0 , 0 , 255
    -------------------------------


    150 - VLAN 20
    Rango ip: [148, 220, 1, 0] - [148, 220, 1, 255]
    Mascara: [255, 255, 255, 0]
    SubMask:  0 , 0 , 0 , 255
    -------------------------------
    ```

    entonces vamos a poner lo siguiente:

   ```
   ip dhcp excluded-address 148.220.0.0 148.220.0.255
   ip dhcp excluded-address 148.220.1.0 148.220.1.255
   ```
3. Ahora asignamos el rango del servidor dhcp:
    ```
    ip dhcp pool VLAN10
    network 148.220.0.0 255.255.255.0 <-- Primera no usable y mascara
    default-router 148.220.0.1 <-- Primera usable
    ```

    ```
    ip dhcp pool VLAN20
    network 148.220.1.0 255.255.255.0 <-- Primera no usable y mascara
    default-router 148.220.1.1 <-- Primera usable
    ```

### Como obligar al puerto 24 a ponerse en modo trunk

1. Seleccionar la interfaz del puerto 24
    ```
    interface f0/24
    ```
2. Obligar el modo trunk
   ```
   switchport trunk encapsulation dot1q
   ```

## Configuracion de un router

### Configurar puerta de enlace de un router

1. Accede a la línea de comandos del router (CLI).

2. Ingresa al modo de configuración global con el comando:
    ```
    enable
    configure terminal
    ```

3. Ahora selecciona la interfaz a la que deseas asignar la dirección IP. Esto podría ser, por ejemplo, una interfaz GigabitEthernet 0/0. Usa el comando de la forma:
    ```
    interface GigabitEthernet 0/0
    ```

4. Ahora puedes asignar la dirección IP y la máscara de subred a la interfaz con el comando (reemplaza 'ip_address' y 'subnet_mask' con la dirección IP y la máscara de subred que deseas asignar):
    ```
    ip address ip_address subnet_mask
    ```

5. Habilita la interfaz con el comando:
    ```
    no shutdown
    ```

6. Por último, puedes salir del modo de configuración de la interfaz y guardar la configuración:
    ```
    exit
    ```

### Configurar puerta de enlace de un router con vlan

En el router:

1. Accede al router a través del terminal (CLI).

2. Ingresa al modo de configuración global con el comando:
    ```
    enable
    configure terminal
    ```

3. Ahora selecciona la interfaz física que está conectada al switch. Esto podría ser, por ejemplo, la interfaz GigabitEthernet 0/0. Utiliza el comando:
    ```
    interface GigabitEthernet 0/0
    no shutdown
    ```

4. Ahora crea una subinterfaz para cada VLAN. Por ejemplo, para la VLAN 10, podrías hacer lo siguiente (donde 'ip_address' y 'subnet_mask' son la dirección IP y la máscara de subred que quieres asignar a esta VLAN):
    ```
    interface GigabitEthernet 0/0.10
    encapsulation dot1Q 10
    ip address ip_address subnet_mask
    ```

5. Repite el paso 4 para cada VLAN, cambiando el número de la VLAN y la dirección IP según sea necesario.

En el switch:

1. Configura el puerto que está conectado al router como un puerto trunk. Suponiendo que este puerto sea el GigabitEthernet 0/24, podrías hacerlo de la siguiente manera:
    ```
    interface GigabitEthernet 0/24
    switchport mode trunk
    ```

### Configuracion de puertas de enlace seriales

1. Acceder al modo de configuracion
2. Considerando que tenemos la siguinete configuracion en donde ambos seriales estan conectados a travez del serial 0/0/0:
    ```
   2 - R1 @ --- R2
    Rango ip: [148, 220, 2, 224] - [148, 220, 2, 227]
    Mascara: [255, 255, 255, 252]
    SubMask:  0 , 0 , 0 , 3
    -------------------------------
    ```
3. Podemos observar que el R1 tiene conectado el cable madre '@' asi que en el R1 vamos a asignar la primera ip usable y le vamos a asignar el clockrate 128000:
   ```
   R1# int s0/0/0
   ip address 148.220.2.225 255.255.255.252
   clockrate 128000
   no sh
   exit
   ```
4. En el R2 vamos a hacer lo mismo, pero le vamos a asignar la 2da ip usable y no le vamos a poner clockrate.
   ```
   R2# int s0/0/0
   ip address 148.220.2.226 255.255.255.252
   no sh
   exit
   ```

### Configuracion router ospf

1. Primero vamos ejecutar el comando para ver todas las redes que esten directamente conectadas a nuestro router.
   ```
   do show ip route brief
   ```
2. Vamos a empezar la configuracion del router
   ```
   router ospf 100
   ```
3. Vamos a ingresar la ip de cada red que tengamos (Las ip que tienen 'C')
   ```
   network x.x.x.x y.y.y.y area 0
   ```
   Recuerda que en el router osfp la mascara va invertida, asi que quedaria asi con la siguinte configuracion:
    ```
    Rango ip: [148, 220, 1, 0] - [148, 220, 1, 255]
    Mascara: [255, 255, 255, 0]
    SubMask:  0 , 0 , 0 , 255
    -------------------------------
    ```
    Quedaria asi:
   ```
   network 148.220.1.0 0.0.0.255 area 0
   ```
4. Cerramos la configuracion
   ```
   exit
   ```

## Guardar la configuracion

Tanto en router o switch, se utiliza el siguinte comando para guardar los cambios en caso de que se apague el dispositivo por alguna razon completamente desconocida e inesperada.

```
copy running-config *
```