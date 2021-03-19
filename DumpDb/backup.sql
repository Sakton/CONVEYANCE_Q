PGDMP                         y            conveyance_db    13.1    13.2     �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
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
                postgres    false            �            1259    41906    adress    TABLE     �  CREATE TABLE conveyance.adress (
    country_name character varying(64) NOT NULL,
    type character varying(16) DEFAULT 'Legal Adress'::character varying,
    index character varying(16) NOT NULL,
    sity character varying(256) NOT NULL,
    adress character varying(256) NOT NULL,
    CONSTRAINT adress_type_check CHECK (((type)::text = ANY ((ARRAY['Legal Adress'::character varying, 'Mail Adress'::character varying])::text[])))
);
    DROP TABLE conveyance.adress;
    
   conveyance         heap    postgres    false    6            �            1259    41948    autopark    TABLE       CREATE TABLE conveyance.autopark (
    name_brand character varying(64) DEFAULT NULL::character varying,
    series_brand character varying(64) DEFAULT NULL::character varying,
    marka_brand character varying(64) DEFAULT NULL::character varying,
    issue date DEFAULT CURRENT_DATE,
    auto_counry_number character varying(16) DEFAULT NULL::character varying,
    vin character varying(20) NOT NULL,
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
    commentary text
);
     DROP TABLE conveyance.autopark;
    
   conveyance         heap    postgres    false    6            �            1259    41899    country    TABLE     �   CREATE TABLE conveyance.country (
    name character varying(64) NOT NULL,
    phonecode character varying(8) NOT NULL,
    abbriviated character varying(4) NOT NULL,
    nds_vat numeric(4,2) NOT NULL
);
    DROP TABLE conveyance.country;
    
   conveyance         heap    postgres    false    6            �          0    41906    adress 
   TABLE DATA           M   COPY conveyance.adress (country_name, type, index, sity, adress) FROM stdin;
 
   conveyance          postgres    false    202   `       �          0    41948    autopark 
   TABLE DATA           �   COPY conveyance.autopark (name_brand, series_brand, marka_brand, issue, auto_counry_number, vin, eco, inspection, reminder, days_reminder, lenth, width, height, space, carring, lift, commentary) FROM stdin;
 
   conveyance          postgres    false    203   }       �          0    41899    country 
   TABLE DATA           L   COPY conveyance.country (name, phonecode, abbriviated, nds_vat) FROM stdin;
 
   conveyance          postgres    false    201   X       @           2606    41969    autopark autopark_pkey 
   CONSTRAINT     Y   ALTER TABLE ONLY conveyance.autopark
    ADD CONSTRAINT autopark_pkey PRIMARY KEY (vin);
 D   ALTER TABLE ONLY conveyance.autopark DROP CONSTRAINT autopark_pkey;
    
   conveyance            postgres    false    203            <           2606    41905 .   country country_name_phonecode_abbriviated_key 
   CONSTRAINT     �   ALTER TABLE ONLY conveyance.country
    ADD CONSTRAINT country_name_phonecode_abbriviated_key UNIQUE (name, phonecode, abbriviated);
 \   ALTER TABLE ONLY conveyance.country DROP CONSTRAINT country_name_phonecode_abbriviated_key;
    
   conveyance            postgres    false    201    201    201            >           2606    41903    country country_pkey 
   CONSTRAINT     X   ALTER TABLE ONLY conveyance.country
    ADD CONSTRAINT country_pkey PRIMARY KEY (name);
 B   ALTER TABLE ONLY conveyance.country DROP CONSTRAINT country_pkey;
    
   conveyance            postgres    false    201            A           2606    41914    adress adress_country_name_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY conveyance.adress
    ADD CONSTRAINT adress_country_name_fkey FOREIGN KEY (country_name) REFERENCES conveyance.country(name) ON DELETE CASCADE;
 M   ALTER TABLE ONLY conveyance.adress DROP CONSTRAINT adress_country_name_fkey;
    
   conveyance          postgres    false    201    202    2878            �      x������ � �      �   �   x���A��@D�?��D�;i�>�K7�\�'00���{�"�г���D�P�F�	� �U�^�f�,���4���Q��c�ښPG�I	m�,nhT�=�HR�Ӥ����`����#�{ZS�o����x��
?(y�+Ԩ���I�k4(q����Y�E����F�oQ�A��U����D��Z�W��~(����4&� ~^s��      �      x������ � �     