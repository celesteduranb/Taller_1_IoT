# Implementación de Osciloscopio y Generador de Señales con ESP32

Internet de las Cosas  
Universidad de La Sabana  

Profesor: Fabian Paez  

Integrantes  
**Celeste Durán**  
**Camila Cano**  
**Diego Escalante**

## Descripción

Este repositorio contiene los archivos correspondientes al primer laboratorio en IoT. En esta práctica se implementan y prueban diferentes funcionalidades del ESP32 relacionadas con conversión analógica-digital, generación de señales analógicas y uso de periféricos básicos.

Entre las actividades realizadas se incluyen pruebas con ADC y DAC, uso de un generador de señales y osciloscopio, interacción con potenciómetros y pulsadores, simulación y prueba del sensor MPU6050, y simulación de un circuito con relé.

El repositorio incluye el informe del laboratorio, el código utilizado en las diferentes pruebas, los archivos de simulación y las evidencias experimentales en video y fotografías.

## Estructura del repositorio

```
Repositorio
│
├── Informe.pdf
│
├── MPU6050
│   ├── codigo_mpu6050.cpp
│   ├── componentes_mpu6050.json
│   └── MPU6050_Funcionamiento_Simulacion.mp4
│
├── RELE
│   ├── codigo_rele.cpp
│   ├── componentes_rele.json
│   └── Rele_Funcionamiento_Simulacion.mp4
│
└── PRUEBAS_Osciloscopio_y_Generador
    │
    ├── prueba_adc_generador
    │   │
    │   ├── Frecuencia_2Hz
    │   │   ├── adc_generador_sinusoidal_2Hz.mp4
    │   │   ├── adc_generador_sinusoidal_codigo_2Hz.mp4
    │   │   └── generador_2Hz.jpg
    │   │
    │   ├── Frecuencia_24Hz
    │   │   ├── adc_generador_sinusoidal_24Hz.mp4
    │   │   ├── adc_generador_sinusoidal_codigo_24Hz.mp4
    │   │   └── generador_24Hz.jpg
    │   │
    │   └── Frecuencia_Variada
    │       ├── adc_generador_cuadrado_triangular.mp4
    │       └── adc_generador_cuadrado_triangular_codigo.mp4
    │
    ├── prueba_adc_potenciometro
    │   ├── montaje_adc_potenciometro.mp4
    │   └── senales_adc_potenciometro.mp4
    │
    ├── prueba_dac_adc
    │   ├── montaje_dac_adc.mp4
    │   └── senales_dac_adc.mp4
    │
    ├── prueba_dac_osciloscopio
    │   ├── montaje_dac_osciloscopio.mp4
    │   └── senales_dac_osciloscopio.mp4
    │
    ├── prueba_grupos
    │   ├── envio_senal.mp4
    │   ├── envio_senal_emisor.mp4
    │   ├── recibir_senal.mp4
    │   └── recibir_senal_receptor.mp4
    │
    └── codigos
        ├── codigo_adc_potenciometro_y_generador.cpp
        └── codigo_adcdac_osciloscopio_enviar_recibir.cpp
```

## Contenido

El repositorio incluye el informe del laboratorio, simulaciones realizadas en Wokwi, código desarrollado para el ESP32 y evidencias experimentales de las pruebas realizadas en el laboratorio.
