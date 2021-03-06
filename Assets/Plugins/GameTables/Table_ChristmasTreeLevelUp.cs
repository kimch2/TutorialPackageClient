//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_ChristmasTreeLevelUp
{ private const string TAB_FILE_DATA = "Tables/ChristmasTreeLevelUp.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_EXPNEED=2,
ID_QUALITY,
ID_LEVELUPREWARDMONEYTYPE,
ID_LEVELUPREWARDMONEYCOUNT,
ID_LEVELUPREWARDITEMID1,
ID_LEVELUPREWARDITEMCOUNT1,
ID_LEVELUPREWARDITEMID2,
ID_LEVELUPREWARDITEMCOUNT2,
ID_QUALITYUPREWARDMONEYTYPE,
ID_QUALITYUPREWARDMONEYCOUNT,
ID_QUALITYUPREWARDITEMID1,
ID_QUALITYUPREWARDITEMCOUNT1,
ID_TEXTUREPATH,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private int m_ExpNeed;
 public int ExpNeed { get{ return m_ExpNeed;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

public int getLevelUpRewardItemCountCount() { return 2; } 
 private int[] m_LevelUpRewardItemCount = new int[2];
 public int GetLevelUpRewardItemCountbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_LevelUpRewardItemCount[idx];
 return -1;
 }

public int getLevelUpRewardItemIDCount() { return 2; } 
 private int[] m_LevelUpRewardItemID = new int[2];
 public int GetLevelUpRewardItemIDbyIndex(int idx) {
 if(idx>=0 && idx<2) return m_LevelUpRewardItemID[idx];
 return -1;
 }

private int m_LevelUpRewardMoneyCount;
 public int LevelUpRewardMoneyCount { get{ return m_LevelUpRewardMoneyCount;}}

private int m_LevelUpRewardMoneyType;
 public int LevelUpRewardMoneyType { get{ return m_LevelUpRewardMoneyType;}}

private int m_Quality;
 public int Quality { get{ return m_Quality;}}

private int m_QualityUpRewardItemCount1;
 public int QualityUpRewardItemCount1 { get{ return m_QualityUpRewardItemCount1;}}

private int m_QualityUpRewardItemID1;
 public int QualityUpRewardItemID1 { get{ return m_QualityUpRewardItemID1;}}

private int m_QualityUpRewardMoneyCount;
 public int QualityUpRewardMoneyCount { get{ return m_QualityUpRewardMoneyCount;}}

private int m_QualityUpRewardMoneyType;
 public int QualityUpRewardMoneyType { get{ return m_QualityUpRewardMoneyType;}}

private string m_TexturePath;
 public string TexturePath { get{ return m_TexturePath;}}

public static bool LoadTable(Dictionary<int, List<object> > _tab)
 {
 if(!TableManager.ReaderPList(GetInstanceFile(),SerializableTable,_tab))
 {
 throw TableException.ErrorReader("Load File{0} Fail!!!",GetInstanceFile());
 }
 return true;
 }
 public static void SerializableTable(string[] valuesList,int skey,Dictionary<int, List<object> > _hash)
 {
 if ((int)_ID.MAX_RECORD!=valuesList.Length)
 {
 throw TableException.ErrorReader("Load {0} error as CodeSize:{1} not Equal DataSize:{2}", GetInstanceFile(),_ID.MAX_RECORD,valuesList.Length);
 }
 Tab_ChristmasTreeLevelUp _values = new Tab_ChristmasTreeLevelUp();
 _values.m_ExpNeed =  Convert.ToInt32(valuesList[(int)_ID.ID_EXPNEED] as string);
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_LevelUpRewardItemCount [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDITEMCOUNT1] as string);
_values.m_LevelUpRewardItemCount [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDITEMCOUNT2] as string);
_values.m_LevelUpRewardItemID [ 0 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDITEMID1] as string);
_values.m_LevelUpRewardItemID [ 1 ] =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDITEMID2] as string);
_values.m_LevelUpRewardMoneyCount =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDMONEYCOUNT] as string);
_values.m_LevelUpRewardMoneyType =  Convert.ToInt32(valuesList[(int)_ID.ID_LEVELUPREWARDMONEYTYPE] as string);
_values.m_Quality =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITY] as string);
_values.m_QualityUpRewardItemCount1 =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITYUPREWARDITEMCOUNT1] as string);
_values.m_QualityUpRewardItemID1 =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITYUPREWARDITEMID1] as string);
_values.m_QualityUpRewardMoneyCount =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITYUPREWARDMONEYCOUNT] as string);
_values.m_QualityUpRewardMoneyType =  Convert.ToInt32(valuesList[(int)_ID.ID_QUALITYUPREWARDMONEYTYPE] as string);
_values.m_TexturePath =  valuesList[(int)_ID.ID_TEXTUREPATH] as string;

 if (_hash.ContainsKey(skey))
 {
 List< object> tList =_hash[skey];
 tList.Add(_values);
 }
 else
 {
 List<object> tList = new List<object>();
 tList.Add(_values); 
 _hash.Add(skey, (List<object>)tList);
 }
 }


}
}

