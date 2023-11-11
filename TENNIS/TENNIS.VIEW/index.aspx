<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="index.aspx.cs" Inherits="TENNIS.VIEW.index" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <p>
            Home</p>
        <asp:Button ID="player" runat="server" OnClick="Button1_Click1" Text="Player" />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Team" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="fill" />
    </form>
</body>
</html>
