PGDMP                         y            conveyance_db    13.1    13.2 	    �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            �           1262    33527    conveyance_db    DATABASE     j   CREATE DATABASE conveyance_db WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Russian_Russia.1251';
    DROP DATABASE conveyance_db;
                postgres    false            �            1259    50162    orders    TABLE     �  CREATE TABLE conveyance.orders (
    id bigint NOT NULL,
    number_contract character varying(48) NOT NULL,
    client character varying(96) NOT NULL,
    price real NOT NULL,
    valuta character varying(10) NOT NULL,
    driver character varying(96),
    post integer DEFAULT 14,
    termin_oplaty character varying(5),
    exchange_rates_eu_pl real DEFAULT 0.00,
    number_orders character varying(64) NOT NULL,
    date_create date DEFAULT CURRENT_DATE,
    doezd real,
    route real
);
    DROP TABLE conveyance.orders;
    
   conveyance         heap    postgres    false            �            1259    50167    orders_id_seq    SEQUENCE     �   ALTER TABLE conveyance.orders ALTER COLUMN id ADD GENERATED ALWAYS AS IDENTITY (
    SEQUENCE NAME conveyance.orders_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1
);
         
   conveyance          postgres    false    205            �          0    50162    orders 
   TABLE DATA           �   COPY conveyance.orders (id, number_contract, client, price, valuta, driver, post, termin_oplaty, exchange_rates_eu_pl, number_orders, date_create, doezd, route) FROM stdin;
 
   conveyance          postgres    false    205   n
       �           0    0    orders_id_seq    SEQUENCE SET     ?   SELECT pg_catalog.setval('conveyance.orders_id_seq', 1, true);
       
   conveyance          postgres    false    206            3           2606    50173    orders orders_id 
   CONSTRAINT     R   ALTER TABLE ONLY conveyance.orders
    ADD CONSTRAINT orders_id PRIMARY KEY (id);
 >   ALTER TABLE ONLY conveyance.orders DROP CONSTRAINT orders_id;
    
   conveyance            postgres    false    205            �   ]   x�3�,NI�7266�tKO��HSpI-BNCCC#N�Pβ��̜�J��҂�̼bN3NCN=��!����+����������g�q��qqq F�/     