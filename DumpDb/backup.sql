PGDMP     (                    y            conveyance_db    13.1    13.2 
    �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            �           1262    33527    conveyance_db    DATABASE     j   CREATE DATABASE conveyance_db WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'Russian_Russia.1251';
    DROP DATABASE conveyance_db;
                postgres    false            �            1259    41948    autopark    TABLE       CREATE TABLE conveyance.autopark (
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
   conveyance         heap    postgres    false            �            1259    50120    autopark_id_seq    SEQUENCE     �   CREATE SEQUENCE conveyance.autopark_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 *   DROP SEQUENCE conveyance.autopark_id_seq;
    
   conveyance          postgres    false    203            �           0    0    autopark_id_seq    SEQUENCE OWNED BY     K   ALTER SEQUENCE conveyance.autopark_id_seq OWNED BY conveyance.autopark.id;
       
   conveyance          postgres    false    204            8           2604    50122    autopark id    DEFAULT     r   ALTER TABLE ONLY conveyance.autopark ALTER COLUMN id SET DEFAULT nextval('conveyance.autopark_id_seq'::regclass);
 >   ALTER TABLE conveyance.autopark ALTER COLUMN id DROP DEFAULT;
    
   conveyance          postgres    false    204    203            �          0    41948    autopark 
   TABLE DATA           �   COPY conveyance.autopark (name_brand, series_brand, marka_brand, issue, auto_counry_number, eco, inspection, reminder, days_reminder, lenth, width, height, space, carring, lift, commentary, id, vin) FROM stdin;
 
   conveyance          postgres    false    203   �       �           0    0    autopark_id_seq    SEQUENCE SET     B   SELECT pg_catalog.setval('conveyance.autopark_id_seq', 38, true);
       
   conveyance          postgres    false    204            �      x����n�0E�w�%ȏ貅�]��X����(����c{҇(nx<��B ��B�����^��ȘB�<R�٨
�����g�e�ؿ]�J?�E(���{m�Z]hU�*XV����=k/��2`^7_�w����r~�ay9�T��=gh�/ި������	�� Vit�d�l��]�U^'�� �&����¦�:,��M'r�(#�$c��|i�26�2rmR��k������2�"t� ��O2�*�>CMӠ��]d-���m�9�c�u��[�L2�v�H�m�jdN<�H���:o���0c     