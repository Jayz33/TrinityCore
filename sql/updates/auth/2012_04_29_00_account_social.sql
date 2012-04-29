DROP TABLE IF EXISTS `account_social`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `account_social` (
  `guid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Account Global Unique Identifier',
  `friend` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Friend Account Global Unique Identifier',
  PRIMARY KEY (`guid`,`friend`),
  KEY `friend` (`friend`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Real ID System';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_social`
--

LOCK TABLES `account_social` WRITE;
/*!40000 ALTER TABLE `account_social` DISABLE KEYS */;
/*!40000 ALTER TABLE `account_social` ENABLE KEYS */;
UNLOCK TABLES;
