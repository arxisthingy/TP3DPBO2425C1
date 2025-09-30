# TP3DPBO2425C1
## Janji
Saya Dzaka Musyaffa Hidayat dengan NIM 2404913 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram 

<img width="891" height="721" alt="diagram" src="https://github.com/user-attachments/assets/cdb3d6fe-ca26-40a5-ad63-6ff8d8474285" />

## Desain Program

**Penggunaan Inheritance untuk atribut umum**
- **Lokomotif** dan **Gerbong** merupakan turunan dari class **SaranaKereta**.
- **GerbongBarang** dan **GerbongPenumpang** merupakan turunan dari class **Gerbong**.
**Lokomotif** mewarisi seluruh atribut dari **SaranaKereta** dan memiliki atribut khusus yang dimiliki yaitu ``jenisMesin``, ``konfigurasiGandar``, dan ``jenisMotorTraksi``.  
**Gerbong** mewarisi seluruh atribut dari **SaranaKereta** dan memiliki atribut khusus yang dimiliki yaitu ``Trainmark``.  
**GerbongPenumpang** mewarisi seluruh atribut dari **Gerbong** dan memiliki atribut khusus yang dimiliki yaitu ``kapasitasPenumpang`` dan ``kelasLayanan``.  
**GerbongBarang** mewarisi seluruh atribut dari **Gerbong** dan memiliki atribut khusus yang dimiliki yaitu ``kapasitasAngkut`` dan ``tipeKargo``.  

**Composition digunakan dimana suatu class memiliki objek yang merupakan class lain**
- **Lokomotif** menggunakan class **Mesin** sebagai atribut
- **Gerbong** menggunakan class **Trainmark** sebagai atribut
- **KeretaApi** menggunakan class **Stasiun** sebagai atribut

## Atribut dan Methods Class

### SaranaKereta 
**Atribut:** `kodeSarana`, `namaSarana`, `beratSarana`, dan `tipeBogie`  
**Methods:** Getter & Setter  

### Mesin 

**Atribut:** `namaMesin`, `dayaMesin`, dan `silinder`
**Methods:** Getter & Setter 

### Trainmark

**Atribut:** `kodeTrainmark` dan `kecepatanMaks`
**Methods:** Getter & Setter 

### Lokomotif 
(Inheritance dari **SaranaKereta**)  
**Atribut:** `jenisMesin` (objek class **Mesin**), `konfigurasiGandar`, dan `jenisMotorTraksi`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari Lokomotif)   

### Gerbong
(Interitance dari **SaranaKereta**)  
**Atribut:** `trainmark` (objek class **Trainmark**)  
**Methods:** Getter & Setter  

### GerbongPenumpang
(Interitance dari **Gerbong**)  
**Atribut:** `kapasitasPenumpang` dan `kelasLayanan`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari GerbongPenumpang) 

### GerbongBarang
(Interitance dari **Gerbong**)  
**Atribut:** `kapasitasAngkut` dan `tipeKargo`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari GerbongBarang) 

### Kereta Api
**Atribut:** `kodeKeretaApi`, `namaKeretaApi`, `Lokomotif` (objek class **Lokomotif**), `Gerbong` (objek class **Gerbong**), `stasiunAwal` (objek class **Stasiun**), dan `stasiunAkhir` (objek class **Stasiun**)  
**Methods:** Getter & Setter,`addLokomotif()`, `addGerbong()`, `addStasiunAwal()`, `addStasiunAkhir()`, dan `printInfo()` (untuk menampilkan informasi dari KeretaApi)

## Alur Program  
- Program dimulai dan ditampilkan data awal (hardcode)
- Penambahan data baru secara statis
- Menampilkan ulang data setelah penambahan

## Dokumentasi

**1. C++**  
<img width="1092" height="697" alt="ss1" src="https://github.com/user-attachments/assets/166bf8dd-5931-453d-81fa-565bd3a96ed6" />  <img width="463" height="608" alt="ss2" src="https://github.com/user-attachments/assets/589bfb63-8f75-4378-ae37-549e4891fa24" />

<img width="442" height="603" alt="ss2" src="https://github.com/user-attachments/assets/1bd0c4c3-f0fb-44c6-8426-d377b1fae1d3" />  
<img width="435" height="247" alt="ss3" src="https://github.com/user-attachments/assets/8d0ac02c-0c83-48ba-8463-a1001b27da9a" />  

**2. Python**  
<img width="677" height="607" alt="py1" src="https://github.com/user-attachments/assets/a5c9b5be-51ba-438c-9b7c-046a7452773d" />  
<img width="451" height="616" alt="py2" src="https://github.com/user-attachments/assets/feb79132-3245-488c-9e3f-4a24f0618f57" />  

**3. Java**  
<img width="676" height="610" alt="ss1" src="https://github.com/user-attachments/assets/dd04b5c8-21c0-4ccf-962e-bb732ec7181d" />  
<img width="463" height="608" alt="ss2" src="https://github.com/user-attachments/assets/e9d0c3f0-5eaa-4987-a2e8-bed8cb411a87" />

