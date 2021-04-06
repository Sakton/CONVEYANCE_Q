PGDMP                          y            conveyance_db    13.1    13.2     �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            �           1262    33527    conveyance_db    DATABASE     j   CREATE DATABASE conveyance_db WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Russian_Russia.1251';
    DROP DATABASE conveyance_db;
                postgres    false                        2615    33528 
   conveyance    SCHEMA        CREATE SCHEMA conveyance;
    DROP SCHEMA conveyance;
                postgres    false            �            1259    41906    adress    TABLE     7  CREATE TABLE conveyance.adress (
    country_name character varying(64) NOT NULL,
    type character varying(16) DEFAULT 'Legal Adress'::character varying,
    index character varying(16) NOT NULL,
    sity character varying(256) NOT NULL,
    adress character varying(256) NOT NULL,
    id integer NOT NULL
);
    DROP TABLE conveyance.adress;
    
   conveyance         heap    postgres    false    6            �            1259    41948    autopark    TABLE       CREATE TABLE conveyance.autopark (
    name_brand character varying(64) DEFAULT NULL::character varying,
    series_brand character varying(64) DEFAULT NULL::character varying,
    marka_brand character varying(64) DEFAULT NULL::character varying,
    issue date DEFAULT CURRENT_DATE,
    auto_counry_number character varying(16) DEFAULT NULL::character varying,
    eco character varying(10),
    inspection date DEFAULT CURRENT_DATE,
    reminder integer DEFAULT 0,
    days_reminder integer DEFAULT 0,
    lenth numeric(10,2) DEFAULT 0,
    width numeric(10,2) DEFAULT 0,
    height numeric(10,2) DEFAULT 0,
    space numeric(10,2) DEFAULT 0,
    carring numeric(10,2) DEFAULT 0,
    lift integer DEFAULT 0,
    commentary text,
    id integer NOT NULL,
    vin character varying(20)
);
     DROP TABLE conveyance.autopark;
    
   conveyance         heap    postgres    false    6            �            1259    50120    autopark_id_seq    SEQUENCE     �   CREATE SEQUENCE conveyance.autopark_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 *   DROP SEQUENCE conveyance.autopark_id_seq;
    
   conveyance          postgres    false    6    203            �           0    0    autopark_id_seq    SEQUENCE OWNED BY     K   ALTER SEQUENCE conveyance.autopark_id_seq OWNED BY conveyance.autopark.id;
       
   conveyance          postgres    false    204            �            1259    41899    country    TABLE     �   CREATE TABLE conveyance.country (
    name character varying(64) NOT NULL,
    phonecode character varying(8) NOT NULL,
    abbriviated character varying(4) NOT NULL,
    nds_vat numeric(4,2) NOT NULL,
    id integer NOT NULL
);
    DROP TABLE conveyance.country;
    
   conveyance         heap    postgres    false    6            �            1259    50162    orders    TABLE     �   CREATE TABLE conveyance.orders (
    id bigint NOT NULL,
    number character varying(48) NOT NULL,
    client character varying(96) NOT NULL,
    price real NOT NULL
);
    DROP TABLE conveyance.orders;
    
   conveyance         heap    postgres    false    6            �            1259    50167    orders_id_seq    SEQUENCE     �   ALTER TABLE conveyance.orders ALTER COLUMN id ADD GENERATED ALWAYS AS IDENTITY (
    SEQUENCE NAME conveyance.orders_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1
);
         
   conveyance          postgres    false    205    6            B           2604    50122    autopark id    DEFAULT     r   ALTER TABLE ONLY conveyance.autopark ALTER COLUMN id SET DEFAULT nextval('conveyance.autopark_id_seq'::regclass);
 >   ALTER TABLE conveyance.autopark ALTER COLUMN id DROP DEFAULT;
    
   conveyance          postgres    false    204    203            �          0    41906    adress 
   TABLE DATA           Q   COPY conveyance.adress (country_name, type, index, sity, adress, id) FROM stdin;
 
   conveyance          postgres    false    202   �       �          0    41948    autopark 
   TABLE DATA           �   COPY conveyance.autopark (name_brand, series_brand, marka_brand, issue, auto_counry_number, eco, inspection, reminder, days_reminder, lenth, width, height, space, carring, lift, commentary, id, vin) FROM stdin;
 
   conveyance          postgres    false    203   �       �          0    41899    country 
   TABLE DATA           P   COPY conveyance.country (name, phonecode, abbriviated, nds_vat, id) FROM stdin;
 
   conveyance          postgres    false    201   
       �          0    50162    orders 
   TABLE DATA           ?   COPY conveyance.orders (id, number, client, price) FROM stdin;
 
   conveyance          postgres    false    205   '       �           0    0    autopark_id_seq    SEQUENCE SET     B   SELECT pg_catalog.setval('conveyance.autopark_id_seq', 51, true);
       
   conveyance          postgres    false    204            �           0    0    orders_id_seq    SEQUENCE SET     @   SELECT pg_catalog.setval('conveyance.orders_id_seq', 1, false);
       
   conveyance          postgres    false    206            F           2606    50139    adress adress_id 
   CONSTRAINT     R   ALTER TABLE ONLY conveyance.adress
    ADD CONSTRAINT adress_id PRIMARY KEY (id);
 >   ALTER TABLE ONLY conveyance.adress DROP CONSTRAINT adress_id;
    
   conveyance            postgres    false    202            H           2606    50166    autopark autopark_id 
   CONSTRAINT     V   ALTER TABLE ONLY conveyance.autopark
    ADD CONSTRAINT autopark_id PRIMARY KEY (id);
 B   ALTER TABLE ONLY conveyance.autopark DROP CONSTRAINT autopark_id;
    
   conveyance            postgres    false    203            D           2606    50161    country country_id 
   CONSTRAINT     T   ALTER TABLE ONLY conveyance.country
    ADD CONSTRAINT country_id PRIMARY KEY (id);
 @   ALTER TABLE ONLY conveyance.country DROP CONSTRAINT country_id;
    
   conveyance            postgres    false    201            J           2606    50173    orders orders_id 
   CONSTRAINT     R   ALTER TABLE ONLY conveyance.orders
    ADD CONSTRAINT orders_id PRIMARY KEY (id);
 >   ALTER TABLE ONLY conveyance.orders DROP CONSTRAINT orders_id;
    
   conveyance            postgres    false    205            �      x������ � �      �     x����n�0�ϳ�b�z��� *E=�s��*���Y�[$f�����Sb_��\`G�Zm:�MxR����|h[��W�����?��aU4_�����&�GLǘ��)c#�rd����*:d�И	fi���>�:g��"��0$��^�%��NI(&Yi�P��Z�O�t�*ˑ��S����G���[�XD�s)��:�k�������^c�䢉�i�y*ȹ#�m �𫱃cJ�½u[��E�8bL����N�0=��a}��J��u�����c���1n�]E�"����Z      �      x������ � �      �      x������ � �     