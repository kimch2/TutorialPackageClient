//This code create by CodeEngine ,don't modify
using System;
 using System.Collections.Generic;
 using System.Collections;

namespace GCGame.Table{
public class Tab_AchieveNotice
{ private const string TAB_FILE_DATA = "Tables/AchieveNotice.txt";
 enum _ID
 {
 INVLAID_INDEX=-1,
ID_ID,
ID_NAME=2,
ID_ICON,
ID_UILINK,
MAX_RECORD
 }
 public static string GetInstanceFile(){return TAB_FILE_DATA; }

private string m_Icon;
 public string Icon { get{ return m_Icon;}}

private int m_Id;
 public int Id { get{ return m_Id;}}

private string m_Name;
 public string Name { get{ return m_Name;}}

private string m_UILink;
 public string UILink { get{ return m_UILink;}}

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
 Tab_AchieveNotice _values = new Tab_AchieveNotice();
 _values.m_Icon =  valuesList[(int)_ID.ID_ICON] as string;
_values.m_Id =  Convert.ToInt32(valuesList[(int)_ID.ID_ID] as string);
_values.m_Name =  valuesList[(int)_ID.ID_NAME] as string;
_values.m_UILink =  valuesList[(int)_ID.ID_UILINK] as string;

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

